//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "SCActionMenuRenderableCell-Protocol.h"
#import "SCSnapchatterCardViewDelegate-Protocol.h"

@class SCSnapchatterCardView, UIViewController;
@protocol SCChatCellPublisherGestureDelegate;

@interface SCSnapchatterChatTableViewCell : SCSavableItemChatTableViewCell <SCSnapchatterCardViewDelegate, SCActionMenuRenderableCell>
{
    SCSnapchatterCardView *_snapchatterCardView;
    UIViewController<SCChatCellPublisherGestureDelegate> *_parentVC;
}

- (void).cxx_destruct;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)configureWithActionMenuVC:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4;
- (void)layoutSubviews;
- (void)renderPayload;
- (void)resetWithOriginalContent;
- (void)snapchatterNameCardView:(id)arg1 didTapForSnapchatter:(id)arg2;
- (void)snapchatterNameCardView:(id)arg1 didToggleButtonForUsername:(id)arg2;
- (id)snapchatterViewModel;

@end

