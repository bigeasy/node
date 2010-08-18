/* Missing constants. */
#define ENOTSOCK 1
#define ECANCELED 1
#define EOPNOTSUPP 1
#define PAGESIZE 1

/* Missing typedefs of native types. */
typedef unsigned int    dev_t;
typedef unsigned long   gid_t;
typedef int             ino_t;
typedef unsigned short  mode_t;
typedef int             off_t;
typedef unsigned long   uid_t;
typedef int             sig_atomic_t;
typedef int             ssize_t;


/* Missing structures. */
typedef struct __DIR {
  int i;
} DIR;

struct utimbuf {
  long actime;
  long modtime;
};

struct statvfs {
    int i;
};
struct stat {
    int i;
};
struct dirent {
    char* d_name;
};

/* Missing functions. */
ssize_t         chown       (void * a, long b, long c);
int             closedir    (DIR* a);
ssize_t         fchmod      (int a, mode_t b);
ssize_t         fchown      (int a, long b, long c);
ssize_t         fsync       (int a);
ssize_t         fstat       (int a, struct stat* b);
ssize_t         fstatvfs    (int a, struct statvfs * b);
ssize_t         ftruncate   (int a, long b);
unsigned int    gettimeofday(struct timeval * a, int b);
ssize_t         link        (void * a, void * b);
ssize_t         lstat       (void * a, struct stat* b);
ssize_t         mkdir       (void * a, mode_t b);
ssize_t         mknod       (void *a, mode_t b, dev_t c);
DIR*            opendir     (void * a);
struct dirent*  readdir     (DIR * a);
ssize_t         readlink    (void *a, void* b, int c);
ssize_t         rmdir       (void * a);
ssize_t         stat        (void * a, struct stat * b);
ssize_t         statvfs     (void * a, struct statvfs * b);
ssize_t         symlink     (void * a, void * b);
void            sync        ();
ssize_t         truncate    (void * a, long b);
int             utime       (const char* a, struct utimbuf* b);

/* Prevent Windows from defining the following. */
#define lseek missing_lseek
#define read missing_read
#define write missing_write
#define strdup missing_strdup
#define open missing_open
#define close missing_close
#define chmod missing_chmod
#define dup2 missing_dup2
#define unlink missing_unlink

ssize_t missing_lseek       (int a, int b, int c);
ssize_t missing_read        (int a, void* b, int c);
ssize_t missing_write       (int a, void * b, int c);
ssize_t missing_open        (void * a, int b, mode_t c);
ssize_t missing_chmod       (void * a, mode_t b);
char *  missing_strdup      (const char * a);
ssize_t missing_close       (int a);
ssize_t missing_dup2        (int a, int b);
ssize_t missing_unlink      (void * a);

#define _WIN32_WINNT  _WIN32_WINNT_WIN2K

/* Prevents Windows from redefining some I/O functions. */
#define __STDC__ 1

/* Many warnings generated, but we'll ignore them and hope for the best. */
#pragma warning( disable : 4018 4244  4267 4311 4715 )
