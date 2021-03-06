// File generated by CPPExt (Transient)
//
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

#ifndef _McCadCSGGeom_HSequenceOfTransformation_HeaderFile
#define _McCadCSGGeom_HSequenceOfTransformation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadCSGGeom_HSequenceOfTransformation_HeaderFile
#include <Handle_McCadCSGGeom_HSequenceOfTransformation.hxx>
#endif

#ifndef _McCadCSGGeom_SequenceOfTransformation_HeaderFile
#include <McCadCSGGeom_SequenceOfTransformation.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_McCadCSGGeom_Transformation_HeaderFile
#include <Handle_McCadCSGGeom_Transformation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class McCadCSGGeom_Transformation;
class McCadCSGGeom_SequenceOfTransformation;



class McCadCSGGeom_HSequenceOfTransformation : public MMgt_TShared {

public:
 // Methods PUBLIC
 // 

McCadCSGGeom_HSequenceOfTransformation();

  Standard_Boolean IsEmpty() const;

  Standard_Integer Length() const;


Standard_EXPORT   void Clear() ;


Standard_EXPORT   void Append(const Handle(McCadCSGGeom_Transformation)& anItem) ;


Standard_EXPORT   void Append(const Handle(McCadCSGGeom_HSequenceOfTransformation)& aSequence) ;


Standard_EXPORT   void Prepend(const Handle(McCadCSGGeom_Transformation)& anItem) ;


Standard_EXPORT   void Prepend(const Handle(McCadCSGGeom_HSequenceOfTransformation)& aSequence) ;


Standard_EXPORT   void Reverse() ;


Standard_EXPORT   void InsertBefore(const Standard_Integer anIndex,const Handle(McCadCSGGeom_Transformation)& anItem) ;


Standard_EXPORT   void InsertBefore(const Standard_Integer anIndex,const Handle(McCadCSGGeom_HSequenceOfTransformation)& aSequence) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer anIndex,const Handle(McCadCSGGeom_Transformation)& anItem) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer anIndex,const Handle(McCadCSGGeom_HSequenceOfTransformation)& aSequence) ;


Standard_EXPORT   void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;


Standard_EXPORT   Handle_McCadCSGGeom_HSequenceOfTransformation Split(const Standard_Integer anIndex) ;


Standard_EXPORT   void SetValue(const Standard_Integer anIndex,const Handle(McCadCSGGeom_Transformation)& anItem) ;


Standard_EXPORT  const Handle_McCadCSGGeom_Transformation& Value(const Standard_Integer anIndex) const;


Standard_EXPORT   Handle_McCadCSGGeom_Transformation& ChangeValue(const Standard_Integer anIndex) ;


Standard_EXPORT   void Remove(const Standard_Integer anIndex) ;


Standard_EXPORT   void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;

 const McCadCSGGeom_SequenceOfTransformation& Sequence() const;

  McCadCSGGeom_SequenceOfTransformation& ChangeSequence() ;


Standard_EXPORT   Handle_McCadCSGGeom_HSequenceOfTransformation ShallowCopy() const;
//Standard_EXPORT ~McCadCSGGeom_HSequenceOfTransformation();




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
McCadCSGGeom_SequenceOfTransformation mySequence;


};

#define Item Handle_McCadCSGGeom_Transformation
#define Item_hxx <McCadCSGGeom_Transformation.hxx>
#define TheSequence McCadCSGGeom_SequenceOfTransformation
#define TheSequence_hxx <McCadCSGGeom_SequenceOfTransformation.hxx>
#define TCollection_HSequence McCadCSGGeom_HSequenceOfTransformation
#define TCollection_HSequence_hxx <McCadCSGGeom_HSequenceOfTransformation.hxx>
#define Handle_TCollection_HSequence Handle_McCadCSGGeom_HSequenceOfTransformation
#define TCollection_HSequence_Type_() McCadCSGGeom_HSequenceOfTransformation_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
//
inline Handle_McCadCSGGeom_HSequenceOfTransformation ShallowCopy(const Handle_McCadCSGGeom_HSequenceOfTransformation& me) {
 return me->ShallowCopy();
}



#endif
