//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCStickerPackTrackingToken : NSObject
{
    NSString *_packID;
    NSDate *_startDate;
}

- (void).cxx_destruct;
- (long long)millisecondsSinceStart;
@property(copy, nonatomic) NSString *packID; // @synthesize packID=_packID;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

@end

