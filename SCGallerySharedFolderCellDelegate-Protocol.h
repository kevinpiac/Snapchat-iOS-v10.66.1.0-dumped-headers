//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCGallerySharedFolderCell, SCGallerySharedFolderViewModel, UILongPressGestureRecognizer, UIView;

@protocol SCGallerySharedFolderCellDelegate
- (void)sharedFolderCellDidLongPressItem:(SCGallerySharedFolderCell *)arg1 index:(long long)arg2 viewModel:(SCGallerySharedFolderViewModel *)arg3 fromView:(UIView *)arg4 longPress:(UILongPressGestureRecognizer *)arg5;
- (void)sharedFolderCellDidTapAvatarForCell:(SCGallerySharedFolderCell *)arg1;
- (void)sharedFolderCellDidTapItem:(SCGallerySharedFolderCell *)arg1 index:(long long)arg2 viewModel:(SCGallerySharedFolderViewModel *)arg3 fromView:(UIView *)arg4;
@end
