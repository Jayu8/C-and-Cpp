class Shape {
   protected:
      int width, height;
   public:
      Shape( int a = 0, int b = 0) {
         width = a;
         height = b;
      }

      virtual int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};

//OUTPUT
//Rectangle class area
//Triangle class area
