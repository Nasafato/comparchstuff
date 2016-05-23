#include	<dirent.h>
#include	<errno.h>
#include	<stdio.h>
#include	<string.h>

/* Print the files listed in a directory.				*/

int
main( int argc, char ** argv )
{
	DIR *		dir;
	struct dirent *	entry;
	extern int	errno;

	if ( argc < 2 )
	{
		printf( "Must specify directory name on command line\n" );
	}
	else if ( (dir = opendir( argv[1] )) == 0 )
	{
		printf( "Could not open %s as directory:  %s\n", argv[1], strerror( errno)  );
	}
	else
	{
//		printf( "begin directory info list.\n" );
		while ( (entry = readdir( dir )) != 0 )
		{
//			printf( "d_ino %d, d_off %d d_reclen %d, d_name %s\n", entry->d_ino,
//				entry->d_off, entry->d_reclen, entry->d_name );
			printf( "%s\n", entry->d_name );
		}
		closedir( dir );
//		printf( "end directory info list.\n" );
	}
}
