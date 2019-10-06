//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCheckInOptionTypeAdditions : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_venue_categoryId;
    NSString *_venue_iconURL;
    NSString *_venue_locality;
    _Bool _venue_isSuggested;
    NSString *_custom_prefix;
}

+ (id)actionmoji;
+ (id)customWithPrefix:(id)arg1;
+ (id)venueWithCategoryId:(id)arg1 iconURL:(id)arg2 locality:(id)arg3 isSuggested:(_Bool)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchVenue:(CDUnknownBlockType)arg1 custom:(CDUnknownBlockType)arg2 actionmoji:(CDUnknownBlockType)arg3;

@end

