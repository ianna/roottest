//
// $Id: TestClass.h 3153 2006-08-10 20:15:49Z loizides $
//

#ifndef HIROOT_TestClass
#define HIROOT_TestClass

#include <vector>
using std::vector;
#include <TObject.h>


class TestClass : public TObject {
protected:  

   template<typename T = Int_t>
   struct TIE_t { /*IndexElement*/
      public:
      UInt_t fIndex; //index in common block 
      T      fVal;   //corresponding value 
      TIE_t(UInt_t i=0, T v=0) : fIndex(i),fVal(v) {}
      virtual ~TIE_t() {}
      ClassDefT(TIE_t,1) // Generic parameter given by an index (in common block)
  };

   template<typename T = Int_t>
   struct IE_t { /*IndexElement*/
      public:
      UInt_t fIndex; //index in common block 
      T      fVal;   //corresponding value 
      IE_t(UInt_t i=0, T v=0) : fIndex(i),fVal(v) {}
      virtual ~IE_t() {}
  };

   Double_t                 fBMass;       // bottom quark mass (D=4.95)
   IE_t<int>                fBos;
   vector< IE_t<Int_t> >    fModbos;      // list of decay modes for outgoing bosons [D=0]

   //  TIE_t<int>                fTBos;
   vector< TIE_t<Int_t> >    fTModbos;      // list of decay modes for outgoing bosons [D=0]

public:
   TestClass();
   virtual ~TestClass();

   ClassDef(TestClass,1) // Base HERWIG interface class
};

#endif /*HIROOT_TestClass*/
