TEMPLATE = app
QT = gui core phonon
CONFIG += qt warn_on console release
DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
FORMS = ui/player.ui
HEADERS = src/player.h
SOURCES = src/player.cpp src/main.cpp