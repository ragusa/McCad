// File generated by CPPExt (Value)
//
//                     Copyright (C) 1991 - 2000 by  
//                      Matra Datavision SA.  All rights reserved.
//  
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
// 
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//  
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _McCadMDReader_DataMapOfLabelAsciiString_HeaderFile
#define _McCadMDReader_DataMapOfLabelAsciiString_HeaderFile

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString_HeaderFile
#include <Handle_McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TDF_Label;
class TCollection_AsciiString;
class TDF_LabelMapHasher;
class McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString;
class McCadMDReader_DataMapIteratorOfDataMapOfLabelAsciiString;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadMDReader_DataMapOfLabelAsciiString  : public TCollection_BasicMap {

public:

    void* operator new(size_t,void* anAddress) 
      {
        return anAddress;
      }
    void* operator new(size_t size) 
      { 
        return Standard::Allocate(size); 
      }
    void  operator delete(void *anAddress) 
      { 
        if (anAddress) Standard::Free((Standard_Address&)anAddress); 
      }
 // Methods PUBLIC
 // 


Standard_EXPORT McCadMDReader_DataMapOfLabelAsciiString(const Standard_Integer NbBuckets = 1);


Standard_EXPORT   McCadMDReader_DataMapOfLabelAsciiString& Assign(const McCadMDReader_DataMapOfLabelAsciiString& Other) ;
  McCadMDReader_DataMapOfLabelAsciiString& operator =(const McCadMDReader_DataMapOfLabelAsciiString& Other) 
{
  return Assign(Other);
}



Standard_EXPORT   void ReSize(const Standard_Integer NbBuckets) ;


Standard_EXPORT   void Clear() ;
~McCadMDReader_DataMapOfLabelAsciiString()
{
  Clear();
}



Standard_EXPORT   Standard_Boolean Bind(const TDF_Label& K,const TCollection_AsciiString& I) ;


Standard_EXPORT   Standard_Boolean IsBound(const TDF_Label& K) const;


Standard_EXPORT   Standard_Boolean UnBind(const TDF_Label& K) ;


Standard_EXPORT  const TCollection_AsciiString& Find(const TDF_Label& K) const;
 const TCollection_AsciiString& operator()(const TDF_Label& K) const
{
  return Find(K);
}



Standard_EXPORT   TCollection_AsciiString& ChangeFind(const TDF_Label& K) ;
  TCollection_AsciiString& operator()(const TDF_Label& K) 
{
  return ChangeFind(K);
}




void* Find1(const Standard_Integer& K) const;
void* ChangeFind1(const Standard_Integer& K) ;


protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT McCadMDReader_DataMapOfLabelAsciiString(const McCadMDReader_DataMapOfLabelAsciiString& Other);


 // Fields PRIVATE
 //


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
