/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://homepage.mac.com/rossetantoine/osirix/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/




#import <AppKit/AppKit.h>
#import "ROI.h"
#import "PlotView.h"

@interface PlotWindow : NSWindowController {
	
	ROI						*curROI;
	
	float					*data, maxValue, minValue;
	long					dataSize;
	
	IBOutlet PlotView		*plot;
	IBOutlet NSTextField	*maxX, *minY, *maxY, *sizeT;
}

- (id) initWithROI: (ROI*) iroi;
- (ROI*) curROI;
@end
