//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUScannableMusicMusicActionRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_artistName;
    NSNumber *_songGenre;
    NSString *_songTitle;
    NSString *_musicGenre;
}

+ (id)withJUScannableMusicMusicActionRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setArtistName:(id)arg1;
- (id)setMusicGenre:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setSongGenre:(id)arg1;
- (id)setSongGenreValue:(int)arg1;
- (id)setSongTitle:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setUsername:(id)arg1;

@end

