//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LCVStabilizerFrameData : NSObject
{
    double _timestamp;
    NSMutableArray *_stabilizerComp;
}

- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSMutableArray *stabilizerComp; // @synthesize stabilizerComp=_stabilizerComp;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

@end

