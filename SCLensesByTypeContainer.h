//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCLensesByTypeContainer : NSObject
{
    NSArray *_inputLenses;
    _Bool _forceSponsoredLensBackSection;
    unsigned long long _cameraPosition;
    NSArray *_frontGeoLenses;
    NSArray *_backGeoLenses;
    NSArray *_scheduledLenses;
    NSArray *_scanUnlockedLensesWithGeofilters;
    NSArray *_scanUnlockedRegularLenses;
    NSArray *_scanUnlockedLenses;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *backGeoLenses; // @synthesize backGeoLenses=_backGeoLenses;
@property(readonly, nonatomic) NSArray *frontGeoLenses; // @synthesize frontGeoLenses=_frontGeoLenses;
- (id)initWithInputLenses:(id)arg1 forceSponsoredLensBackSection:(_Bool)arg2 cameraPosition:(unsigned long long)arg3;
@property(readonly, nonatomic) NSArray *scanUnlockedLenses; // @synthesize scanUnlockedLenses=_scanUnlockedLenses;
@property(readonly, nonatomic) NSArray *scanUnlockedLensesWithGeofilters; // @synthesize scanUnlockedLensesWithGeofilters=_scanUnlockedLensesWithGeofilters;
@property(readonly, nonatomic) NSArray *scanUnlockedRegularLenses; // @synthesize scanUnlockedRegularLenses=_scanUnlockedRegularLenses;
@property(readonly, nonatomic) NSArray *scheduledLenses; // @synthesize scheduledLenses=_scheduledLenses;

@end
