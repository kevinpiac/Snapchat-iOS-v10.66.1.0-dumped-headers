//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, SCSentinel;

@interface SCShazamSIGXRequest : NSObject
{
    SCSentinel *_sentinel;
    NSData *_data;
}

- (void).cxx_destruct;
- (void)cancel;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1;
- (_Bool)isCancelled;

@end
