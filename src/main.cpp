#include <QApplication>
#include "player.h"
#include <iostream>

using namespace::std;
//
int main(int argc, char ** argv)
{
	QApplication app( argc, argv );
	Player win;
	QStringList files;
	files << argv[1];
	if (3 == argc)
	{
		win.setTitle(argv[2]);
	}
	else if (4 == argc)
	{
		files << argv[2];	
		win.setTitle(argv[3]);
	}	
	win.loadFiles(files);
	win.show(); 
	app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
	return app.exec();
}
