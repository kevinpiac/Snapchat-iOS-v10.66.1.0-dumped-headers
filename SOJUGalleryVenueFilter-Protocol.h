//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUGalleryVenueFilter <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *selectedVenueId;
@property(readonly, copy, nonatomic) NSArray *venues;
@property(readonly, copy, nonatomic) NSNumber *yOffset;
@end

