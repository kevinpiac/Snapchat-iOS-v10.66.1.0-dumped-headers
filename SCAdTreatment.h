//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class SCSponsoredSlug;

@interface SCAdTreatment : NSObject <NSCoding>
{
    SCSponsoredSlug *_sponsoredSlug;
    SCSponsoredSlug *_adSlug;
}

+ (_Bool)initialized;
+ (id)path;
+ (id)shared;
- (void).cxx_destruct;
@property(readonly) SCSponsoredSlug *adSlug;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)parseSponsoredSlugFromAllUpdatesResponse:(id)arg1;
- (_Bool)saveState;
- (void)setAdSlug:(id)arg1;
- (void)setSponsoredSlug:(id)arg1;
@property(readonly) SCSponsoredSlug *sponsoredSlug;

@end

