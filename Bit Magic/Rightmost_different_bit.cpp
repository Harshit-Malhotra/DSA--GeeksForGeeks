int posOfRightMostDiffBit(int m, int n)
{
    if(m==n)
        return -1;
    int s =m^n;
    return ffs(s);
    
    
}
