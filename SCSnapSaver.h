//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSnapSaver : NSObject
{
}

+ (id)shared;
- (id)_fetchSnapchatAlbums;
- (void)fetchAndLogAlbumSize;
- (void)finishedSavingToAlbumWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)logAlbumPhotoCount:(unsigned long long)arg1 videoCount:(unsigned long long)arg2 albumCounts:(id)arg3;
- (void)logSnapSaveEventStart:(id)arg1;
- (void)logSnapSaveEventWithError:(id)arg1 context:(id)arg2 isVideo:(_Bool)arg3 isVideoFiltered:(_Bool)arg4 videoDuration:(double)arg5 otherParameters:(id)arg6;
- (void)saveSnapImageToSnapAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveSnapVideoAtURLToSnapAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 deleteAfterSaving:(_Bool)arg3;

@end

