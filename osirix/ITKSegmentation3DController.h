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




#import <Cocoa/Cocoa.h>

@class ViewerController;

@interface ITKSegmentation3DController : NSWindowController {

				ViewerController		*viewer, *resultsViewer;

	// parramters
	IBOutlet	NSBox					*parametersBox;
	IBOutlet	NSMatrix				*growingMode;
	IBOutlet	NSPopUpButton			*algorithmPopup;
				NSPoint					startingPoint;
	IBOutlet	NSTextField				*startingPointWorldPosition, *startingPointPixelPosition, *startingPointValue;
	IBOutlet	NSForm					*params;
	// results
	IBOutlet	NSBox					*resultsBox;
	IBOutlet	NSMatrix				*outputResult;
	IBOutlet	NSMatrix				*outputROIType;
	IBOutlet	NSSlider				*numberOfPointsSlider;
	IBOutlet	NSMatrix				*pixelsSet;
	IBOutlet	NSMatrix				*pixelsValue;
	IBOutlet	NSSlider				*roiResolution;
	IBOutlet	NSTextField				*newName;

	IBOutlet	NSButton				*computeButton;
	
	// Algorithms
				NSArray			*algorithms;
				NSArray			*parameters;
				NSArray			*defaultsParameters;
				NSArray			*urlHelp;
}

- (IBAction) compute:(id) sender;
- (id) initWithViewer:(ViewerController*) v;

- (IBAction) changeAlgorithm: (id) sender;
- (void) setNumberOfParameters: (int) n;
- (IBAction) changeROItype: (id) sender;

- (IBAction) algorithmGetHelp:(id) sender;
- (void) fillAlgorithmPopup;

@end
