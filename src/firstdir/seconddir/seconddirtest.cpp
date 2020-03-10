int add2(int a, int b)
{
    return a + b;
}


int test_org2(int* p){
   if (p != nullptr) {
      *p=1;
   }
   *p = 2;
   
   int ret = *p;
   
   return ret;
}