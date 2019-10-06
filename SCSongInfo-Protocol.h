//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSString, SCSongInfoPlayNow;

@protocol SCSongInfo <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *artistImageURL;
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) NSArray *artists;
@property(readonly, copy, nonatomic) NSString *genre;
@property(readonly, copy, nonatomic) NSString *highDefImageUrl;
@property(readonly, copy, nonatomic) NSString *landscapeImageUrl;
@property(readonly, copy, nonatomic) SCSongInfoPlayNow *playNow;
@property(readonly, copy, nonatomic) NSDate *recordDate;
@property(readonly, copy, nonatomic) NSString *songTitle;
@property(readonly, copy, nonatomic) NSString *songURL;
@end
