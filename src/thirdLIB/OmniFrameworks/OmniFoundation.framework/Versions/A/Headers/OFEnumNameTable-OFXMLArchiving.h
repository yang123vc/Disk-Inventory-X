// Copyright 2002-2019 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.

#import <OmniFoundation/OFEnumNameTable.h>

@class OFXMLCursor, OFXMLDocument;

NS_ASSUME_NONNULL_BEGIN

@interface OFEnumNameTable (OFXMLArchiving)

+ (NSString *)xmlElementName;
- (void)appendXML:(OFXMLDocument *)doc;
- initFromXML:(OFXMLCursor *)cursor;

@end

NS_ASSUME_NONNULL_END
