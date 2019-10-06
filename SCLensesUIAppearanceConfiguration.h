//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensesUIAppearanceConfiguration-Protocol.h"

@class NSString;

@interface SCLensesUIAppearanceConfiguration : NSObject <SCLensesUIAppearanceConfiguration>
{
    _Bool _appearanceAnimationEnabled;
    _Bool _dismissible;
    _Bool _lensCategoryInitAnimationEnabled;
}

+ (id)defaultConfigurationForLens:(id)arg1;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) _Bool appearanceAnimationEnabled; // @synthesize appearanceAnimationEnabled=_appearanceAnimationEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool dismissible; // @synthesize dismissible=_dismissible;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAppearanceAnimationEnabled:(_Bool)arg1 dismissible:(_Bool)arg2 lensCategoryInitAnimationEnabled:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool lensCategoryInitAnimationEnabled; // @synthesize lensCategoryInitAnimationEnabled=_lensCategoryInitAnimationEnabled;
- (_Bool)preferFasterCoding;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
