//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCLensThumbnailEventEntityBuilder : NSObject
{
    NSString *_lensId;
    long long _lensIndex;
    double _onScreenTimeNotReady;
    double _onScreenTimeTotal;
}

+ (id)withLensThumbnailEventEntity:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setLensId:(id)arg1;
- (id)setLensIndex:(long long)arg1;
- (id)setOnScreenTimeNotReady:(double)arg1;
- (id)setOnScreenTimeTotal:(double)arg1;

@end
