//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"

@class MMUIButton, NSString, RichTextView, WCFinderComment;
@protocol WCFinderFeedUserNameClickDelegate;

@interface WCFinderFeedNewCommentView : UIView <ILinkEventExt>
{
    id <WCFinderFeedUserNameClickDelegate> _delegate;
    RichTextView *_contentDescView;
    WCFinderComment *_comment;
    MMUIButton *_likeBtn;
}

+ (id)getCommentContentTextWithComment:(id)arg1;
+ (double)heightWithComment:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) RichTextView *contentDescView; // @synthesize contentDescView=_contentDescView;
@property(nonatomic) __weak id <WCFinderFeedUserNameClickDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)copyText;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)resetReuseState;
- (void)onClickLikeComment;
- (void)clickCommentCell;
- (void)clickCommentAction;
- (void)updateWithComment:(id)arg1;
- (void)initSubView;
- (void)cancelHightLight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
