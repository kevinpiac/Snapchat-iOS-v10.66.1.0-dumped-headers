//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol SCCheetahSendToPreviewViewModel <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *chatMessage;
@property(readonly, nonatomic) double mediaViewAspectRatio;
@property(readonly, nonatomic) _Bool shouldPadMediaView;
@property(readonly, copy, nonatomic) NSString *subTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) long long viewStyle;
@end
