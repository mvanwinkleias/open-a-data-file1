
###### Determine where to load data files from
# Can't nest ifeq statements(?)
# Shouldn't use := as it's not portable
if conditional_use_project_datadir
datadir_path = $(srcdir)/../data
else
datadir_path = $(pkgdatadir)
endif

# These might be a good idea
.POSIX:
AM_CFLAGS = -std=c99 -pedantic -D_POSIX_C_SOURCE=200809L -Wall -Wextra -DDATADIR=\"$(datadir_path)\"
AM_LDFLAGS = 

bin_PROGRAMS = open-a-data-file1
open_a_data_file1_SOURCES = main.c

# Examples for compiling against things
# open_a_data_file1_CFLAGS = $(SQLITE_CFLAGS) $(GTK_CFLAGS)
# open_a_data_file1_LDADD = $(SQLITE_LIBS) $(GTK_LIBS)

# This might be how to add CPP stuff
# AM_CPPFLAGS =  -pedantic -Wall -Wextra
# AM_CPPFLAGS+= -std=c++11

# This might be how to link against things:
# AM_CFLAGS += -lsome_library
# AM_LDFLAGS += -lsome_library

# AM_CFLAGS += -pthread
# AM_LDFLAGS += -lpthread


