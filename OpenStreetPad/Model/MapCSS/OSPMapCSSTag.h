//
//  Tag.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 31/10/2011.
//  Copyright (c) 2011 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CoreParse.h"

@interface OSPMapCSSTag : NSObject <CPParseResult>

@property (readwrite, assign, getter = isPseudoTag) BOOL pseudoTag;
@property (readwrite, copy) NSArray *keys;

@end
