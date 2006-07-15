#ifndef _KIND_H_
#define _KIND_H_

/*/////////////////////////////////////////////////////////////////////////////////////
//This file defines the outside view of GKinds and LKinds/////
////////////////////////////////////////////////////////////////////////////////////*/

//GKind Header Data
//Note: Uses CM->GKind & CM->GKindcount

//Initializes the Global Kind Vector
extern void InitTGKinds();
//Loads the global kinds of a bytecode file.
extern void LoadGKinds();
//Loads the global kinds of the top-level bytecode file.
extern void LoadTopGKinds();
//Writes out the contents of the Global Kind Vector.
extern void WriteGKinds();


//LKind Header Data
//Note: Uses CM->LKindoffset & CM->LKindcount

//Initializes the Local Kind Vector
extern void InitTLKinds();
//Loads the local kinds of a bytecode file.
extern void LoadLKinds();
//Writes out the contents of the Local Kind Vector.
extern void WriteLKinds();


extern int CheckKindArity(KindInd i);

#endif //_KIND_H_