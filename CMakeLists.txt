# CMakeのバージョンを設定
cmake_minimum_required(VERSION 2.8)
# プロジェクト名と使用する言語を設定
project(cppTask_MarubatuGame CXX)
# a.outという実行ファイルをmain.cppから作成
add_executable(a.out main.cpp gameField.cpp player.cpp)