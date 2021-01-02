AC_INIT([open-a-data-file1], [1.0], [bug-automake@gnu.org])


AC_ARG_VAR(wanted_datadir_path, Overrides the decision to use -DDATADIR=pkgdatadir)
AM_CONDITIONAL([conditional_empty_datadir_path], [test "$datadir_path" -eq ""])

AC_ARG_VAR(use_project_data_dir, Set to 1 to use project-dir/data as DATADIR)

AM_CONDITIONAL([conditional_use_project_data_dir], [test "$use_project_data_dir" -eq "1"])

dnl PKG_CHECK examples
dnl PKG_CHECK_MODULES([SQLITE], [sqlite3])
dnl PKG_CHECK_MODULES([GTK], [gtk+-3.0])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 data/Makefile
 data/text/Makefile
 src/Makefile
])
AC_CONFIG_MACRO_DIRS([m4])

LT_INIT

AC_OUTPUT
