#!/bin/bash

source_dir=import/material-design-icons-master
importer_dir=import/roo_display_image_importer-main
icon_dir=`pwd`

sizes="18 24 36 48"

rm -rf ./import/png
for size in ${sizes}; do
  rm -rf ./src/${size}
done



if [ ! -d ${source_dir} ]
then
  echo "Fetching material icons..." 
  mkdir -p import
  cd import
  rm master.zip
  wget "https://github.com/google/material-design-icons/archive/master.zip"
  unzip master.zip 'material-design-icons-master/png/*/1x/*_black_*.png'
  rm master.zip
  cd ${icon_dir}
  echo "Fetching material icons done."
fi

if [ ! -d ${importer_dir} ]
then
  echo "Fetching the image importer..." 
  mkdir -p import
  cd import
  rm main.zip
  wget "https://github.com/dejwk/roo_display_image_importer/archive/main.zip"
  unzip main.zip > /dev/null
  rm main.zip
  cd ${icon_dir}
  echo "Fetching the image importer done."
fi

mkdir -p import
mkdir -p import/png

categories=`ls ${source_dir}/png`

#categories=`find ${source_dir} -wholename "*/1x/*black_*" -printf "%h\n" | sort -u | sed 's/import\/material-design-icons-master\///' | sed 's/\/1x//'`

#categories=`find ${source_dir} -wholename "*/1x_web/*black_*" -printf "%h\n" | sort -u | sed 's/import\/material-design-icons-master\///' | sed 's/\/1x_web//'`
echo "Categories found: "
echo ${categories}

echo "Copying PNG files..."

for size in ${sizes}; do
  echo "size: ${size}"
  mkdir -p import/png/${size}
  for category in ${categories}; do
  echo "category: ${category}"
    mkdir -p import/png/${size}/${category}
    icons=`ls ${source_dir}/png/${category}`
    for i in ${icons}; do
      src=${source_dir}/png/${category}/$i/materialicons/${size}dp/1x/baseline_${i}_black_${size}dp.png
      dst=import/png/${size}/${category}/ic_${size}_${category}_${i}.png
      cp ${src} ${dst} >& /dev/null
    done
#    for i in `find ${source_dir}/${category}/1x_web/*black_${size}dp* -printf "%f\n"`; do
#      dest=`echo $i | sed "s/_black_${size}dp//g" | sed "s/ic_/ic_${size}_${category}_/"`
#      cp ${source_dir}/${category}/1x_web/$i import/png/${size}/${category}/${dest}
#    done
  done
done

echo "Copying PNG files done."

echo "Generating C++ files... "

#mkdir -p roo_material_icons

for size in ${sizes}; do
  echo "size: ${size}"
  mkdir -p roo_material_icons/${size}
  for category in ${categories}; do
    echo "category: ${category}"
    mkdir -p roo_material_icons/${size}/${category}
    files=`find import/png/${size}/${category} -name "*.png" -printf "%f "`
    (cd ${importer_dir}; ./gradlew run --args="-s PROGMEM -o ${category} -e ALPHA4 -c RLE --fg=color::Black --input-dir=${icon_dir}/import/png/${size}/${category} --output-dir=${icon_dir}/roo_material_icons/${size} ${files}")
  done
done

