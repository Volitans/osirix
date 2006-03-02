//
//  DCMRootRecord.h
//  OsiriX
//
//  Created by Lance Pysher on 2/23/05.

/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://homepage.mac.com/rossetantoine/osirix/copyright for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/

#import <Cocoa/Cocoa.h>
#import "DCMRecord.h"

@interface DCMRootRecord : DCMRecord{

}

+ (id)rootRecord;
+ (NSString *)recordUIDForDCMObject:(DCMObject *)dcmObject;
+ (id)rootRecordWithRecordSequence:(NSArray *)recordSequence;

@end
