//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCGalleryDebugSyncStatusChecker, UIButton, UITextView;
@protocol SCGalleryEntry, SCGallerySnap;

@interface SCGalleryDebugSyncStatusView : UIView
{
    UITextView *_textView;
    UIButton *_refreshButton;
    SCGalleryDebugSyncStatusChecker *_debugSyncStatusChecker;
    id <SCGalleryEntry> _galleryEntry;
    id <SCGallerySnap> _gallerySnap;
}

- (void).cxx_destruct;
- (void)_didPressRefreshButton;
@property(retain, nonatomic) SCGalleryDebugSyncStatusChecker *debugSyncStatusChecker; // @synthesize debugSyncStatusChecker=_debugSyncStatusChecker;
@property(retain, nonatomic) id <SCGalleryEntry> galleryEntry; // @synthesize galleryEntry=_galleryEntry;
@property(retain, nonatomic) id <SCGallerySnap> gallerySnap; // @synthesize gallerySnap=_gallerySnap;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reset;
- (void)toggle;

@end

