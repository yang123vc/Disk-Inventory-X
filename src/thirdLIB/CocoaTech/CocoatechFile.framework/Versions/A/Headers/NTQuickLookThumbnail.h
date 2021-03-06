//
//  NTQuickLookThumbnail.h
//  CocoatechFile
//
//  Created by Steve Gehrman on 12/4/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface NTQuickLookThumbnail : NSObject {
}

// called from thread
+ (NSImage *)previewImage:(NSURL*)url
				   ofSize:(NSSize)size
				   asIcon:(BOOL)icon;

@end


