extern int *glob; // Removed /*@only@*/ unless it really owns the memory

/*@only@*/ int *f (/*@only@*/ int *x, int *y, int *z)
/*@globals glob;@*/
{
    int *m = (int *) malloc (sizeof (int));
    *m = *x;      // Safe now
    free(x);      // Now it's safe to free x
    glob = y;     // Assigning y to glob, assuming y is not owned
    free(m);      // Prevent memory leak
    return z;     // Return z without transferring ownership
}

