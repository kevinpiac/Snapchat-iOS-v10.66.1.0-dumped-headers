//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LSADeviceMotionParams : NSObject
{
    _Bool _requiresCompassAlignment;
    _Bool _synchronousProcessingInPostCapture;
}

- (id)initWithCompassAlignment:(_Bool)arg1 synchronousProcessingInPostCapture:(_Bool)arg2;
@property(readonly, nonatomic) _Bool requiresCompassAlignment; // @synthesize requiresCompassAlignment=_requiresCompassAlignment;
@property(readonly, nonatomic) _Bool synchronousProcessingInPostCapture; // @synthesize synchronousProcessingInPostCapture=_synchronousProcessingInPostCapture;

@end

