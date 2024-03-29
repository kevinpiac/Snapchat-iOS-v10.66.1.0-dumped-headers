//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SCMediaDataPackageBuilder : NSObject
{
    NSString *_packageId;
    NSData *_mediaData;
    NSData *_overlayData;
}

+ (id)mediaDataPackage;
+ (id)mediaDataPackageFromExistingMediaDataPackage:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withMediaData:(id)arg1;
- (id)withOverlayData:(id)arg1;
- (id)withPackageId:(id)arg1;

@end

