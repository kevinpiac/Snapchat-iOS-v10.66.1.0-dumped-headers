//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol SOJUAdTrackInfo <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *pixelToken;
@property(readonly, copy, nonatomic) NSString *sceid;
@property(readonly, copy, nonatomic) NSString *trackHostAndPath;
@property(readonly, copy, nonatomic) NSString *userData;
@property(readonly, copy, nonatomic) NSData *userDataV2Deprecated;
@property(readonly, copy, nonatomic) NSString *userDataV2Encrypted;
@end

