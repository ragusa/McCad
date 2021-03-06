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

#ifndef _McCadAEV_SequenceOfViewer_HeaderFile
#define _McCadAEV_SequenceOfViewer_HeaderFile

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_McCadAEV_SequenceNodeOfSequenceOfViewer_HeaderFile
#include <Handle_McCadAEV_SequenceNodeOfSequenceOfViewer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class McCadAEV_Viewer;
class McCadAEV_SequenceNodeOfSequenceOfViewer;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadAEV_SequenceOfViewer  : public TCollection_BaseSequence {

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

McCadAEV_SequenceOfViewer();


Standard_EXPORT   void Clear() ;
~McCadAEV_SequenceOfViewer()
{
  Clear();
}



Standard_EXPORT  const McCadAEV_SequenceOfViewer& Assign(const McCadAEV_SequenceOfViewer& Other) ;
 const McCadAEV_SequenceOfViewer& operator =(const McCadAEV_SequenceOfViewer& Other) 
{
  return Assign(Other);
}



Standard_EXPORT   void Append(const McCadAEV_Viewer& T) ;

  void Append(McCadAEV_SequenceOfViewer& S) ;


Standard_EXPORT   void Prepend(const McCadAEV_Viewer& T) ;

  void Prepend(McCadAEV_SequenceOfViewer& S) ;

  void InsertBefore(const Standard_Integer Index,const McCadAEV_Viewer& T) ;

  void InsertBefore(const Standard_Integer Index,McCadAEV_SequenceOfViewer& S) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer Index,const McCadAEV_Viewer& T) ;

  void InsertAfter(const Standard_Integer Index,McCadAEV_SequenceOfViewer& S) ;


Standard_EXPORT  const McCadAEV_Viewer& First() const;


Standard_EXPORT  const McCadAEV_Viewer& Last() const;

  void Split(const Standard_Integer Index,McCadAEV_SequenceOfViewer& Sub) ;


Standard_EXPORT  const McCadAEV_Viewer& Value(const Standard_Integer Index) const;
 const McCadAEV_Viewer& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}



Standard_EXPORT   void SetValue(const Standard_Integer Index,const McCadAEV_Viewer& I) ;


Standard_EXPORT   McCadAEV_Viewer& ChangeValue(const Standard_Integer Index) ;
  McCadAEV_Viewer& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}



Standard_EXPORT   void Remove(const Standard_Integer Index) ;


Standard_EXPORT   void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT McCadAEV_SequenceOfViewer(const McCadAEV_SequenceOfViewer& Other);


 // Fields PRIVATE
 //


};

#define SeqItem McCadAEV_Viewer
#define SeqItem_hxx <McCadAEV_Viewer.hxx>
#define TCollection_SequenceNode McCadAEV_SequenceNodeOfSequenceOfViewer
#define TCollection_SequenceNode_hxx <McCadAEV_SequenceNodeOfSequenceOfViewer.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadAEV_SequenceNodeOfSequenceOfViewer
#define TCollection_SequenceNode_Type_() McCadAEV_SequenceNodeOfSequenceOfViewer_Type_()
#define TCollection_Sequence McCadAEV_SequenceOfViewer
#define TCollection_Sequence_hxx <McCadAEV_SequenceOfViewer.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)
//


#endif
