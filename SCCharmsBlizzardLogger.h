//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLogger;

@interface SCCharmsBlizzardLogger : NSObject
{
    SCLogger *_logger;
}

- (void).cxx_destruct;
- (void)_setCharmBaseEvent:(id)arg1 withParameters:(id)arg2;
- (id)initWithLogger:(id)arg1;
- (void)logCharmAttainment:(id)arg1;
- (void)logCharmCardDetailImpression:(id)arg1;
- (void)logCharmCardDetailView:(id)arg1;
- (void)logCharmCardImpression:(id)arg1;
- (void)logCharmHide:(id)arg1;

@end

