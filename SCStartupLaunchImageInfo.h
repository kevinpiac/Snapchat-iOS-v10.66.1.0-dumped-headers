//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SCStartupLaunchImageInfo : NSObject
{
    NSNumber *_deviceHeight;
    NSString *_imageName;
    struct CGSize _launchImageSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double forDeviceHeight;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithImageName:(id)arg1 launchImageSize:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGSize launchImageSize; // @synthesize launchImageSize=_launchImageSize;

@end
