//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCGalleryActionMenuOptionModelConverter : NSObject
{
}

+ (id)actionMenuOptionForCameraRollItem:(id)arg1 userSession:(id)arg2;
+ (id)actionMenuOptionForGallerySnap:(id)arg1 entryType:(int)arg2 isFailedEntry:(_Bool)arg3 isEntryClientCompatible:(_Bool)arg4 isPrivate:(_Bool)arg5 isTemporaryFeatured:(_Bool)arg6 isMonthlyFeatured:(_Bool)arg7 isPersistLocally:(_Bool)arg8 snapHighlightState:(long long)arg9 userSession:(id)arg10;
+ (id)actionMenuOptionForSnapWithEntryType:(int)arg1 isFailedEntry:(_Bool)arg2 isEntryClientCompatible:(_Bool)arg3 isPrivate:(_Bool)arg4 isPendingSync:(_Bool)arg5 isBoomboxEnabled:(_Bool)arg6 userSession:(id)arg7;

@end

