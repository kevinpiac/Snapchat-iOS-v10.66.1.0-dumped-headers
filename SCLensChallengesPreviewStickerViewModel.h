//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL, SCLensChallengesSectionMusicMetadata;

@interface SCLensChallengesPreviewStickerViewModel : NSObject <NSCopying, NSCoding>
{
    SCLensChallengesSectionMusicMetadata *_musicMetadata;
    NSString *_artistName;
    NSString *_songName;
    NSURL *_songIconURL;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMusicMetadata:(id)arg1;
- (id)initWithMusicMetadata:(id)arg1 artistName:(id)arg2 songName:(id)arg3 songIconURL:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCLensChallengesSectionMusicMetadata *musicMetadata; // @synthesize musicMetadata=_musicMetadata;
@property(readonly, copy, nonatomic) NSURL *songIconURL; // @synthesize songIconURL=_songIconURL;
@property(readonly, copy, nonatomic) NSString *songName; // @synthesize songName=_songName;

@end

