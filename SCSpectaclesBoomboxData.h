//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCGalleryEntry, SCGallerySnap;

@interface SCSpectaclesBoomboxData : NSObject
{
    id <SCGallerySnap> _snap;
    id <SCGalleryEntry> _entry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCGalleryEntry> entry; // @synthesize entry=_entry;
- (id)initWithSnap:(id)arg1 entry:(id)arg2;
@property(readonly, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;

@end

