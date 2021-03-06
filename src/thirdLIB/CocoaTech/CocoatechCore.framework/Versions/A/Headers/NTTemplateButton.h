//
//  NTTemplateButton.h
//  CocoatechCore
//
//  Created by Steve Gehrman on 4/4/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NTTemplateButton : NSButton
{
	BOOL mouseOver;
	NSTrackingArea* trackingArea;
	
	NSString* mouseDownNotification;  // if set, will post notification on mouseDown, useful for setting up first responder before action is triggered
}

@property (nonatomic, retain) NSString* mouseDownNotification;

+ (NTTemplateButton*)button:(NSImage*)image; // toggleButton == NO by default
+ (NTTemplateButton*)button:(NSImage*)image toggleButton:(BOOL)toggleButton;

- (NSSize)size;
@end
