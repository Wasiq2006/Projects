#!/bin/bash
read -p "Enter The Path where you want to Create The Folders(e.g /home/user/Documents Or . for current folder):" path

if [ ! -d "$path" ]; then
  echo "Error: The Path Does Not Exist!"
  exit 1
fi
read -p "Enter Semester Number: " semester

read -p "Enter Total Number Of Courses in Semester $semester: " total_courses

semester_folders="$path/Semester-$semester"

if [ -d "$semester_folders" ]; then
  echo "Directory '$semester_folders' Already Exits. Adding Courses To The Existing folder !"
else
  mkdir -p "$semester_folders"
  echo "Created New Directory: $semester_folders"
fi
for ((i = 1; i <= total_courses; i++)); do
  read -p "Enter Name of Course $i: " course_name
  course_path="$semester_folders/$course_name"

  if [ -d "$course_path" ]; then
    echo "Course Folder '$course_name' Already Exits !"
  else
    mkdir -p "$course_path"
    echo "Course Folder: $course_path"
  fi
done

echo -e "\n All Folders Are created !"
