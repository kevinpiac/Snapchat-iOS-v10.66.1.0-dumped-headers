//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCShakeToReportServices : NSObject
{
    SCLazy *_shakePresenter;
    SCLazy *_autoShakeToReporter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *autoShakeToReporter; // @synthesize autoShakeToReporter=_autoShakeToReporter;
- (id)initWithShakeToReportPresenter:(id)arg1 autoShakeToReporter:(id)arg2;
@property(readonly, nonatomic) SCLazy *shakePresenter; // @synthesize shakePresenter=_shakePresenter;

@end

