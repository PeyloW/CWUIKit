//
//  CWTableViewCellBackgroundView.h
//  CWUIKit
//  Created by Fredrik Olsson 
//
//  Copyright (c) 2011, Jayway AB All rights reserved.
//  Copyright (c) 2012, Fredrik Olsson All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of Jayway AB nor the names of its contributors may 
//       be used to endorse or promote products derived from this software 
//       without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL JAYWAY AB BE LIABLE FOR ANY DIRECT, INDIRECT, 
//  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
//  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
//  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
//  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF 
//  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//


#import <UIKit/UIKit.h>

typedef enum {
	CWRectEdgeTop = 1 << 0,
	CWRectEdgeBottom = 1 << 1,
	CWRectEdgeLeft = 1 << 2,
	CWRectEdgeRight = 1 << 3,
    CWRectEdgeAllEdges = ~0
} CWRectEdge;

UIRectCorner CWRectCornerFromRectEdge(CWRectEdge edge);


/*!
 * @abstract A view to use as background view and selected backgroundview in UITableView and CWColumnTableView.
 *
 * @discussion The default implementation is visually indistinguishable from the background views
 *             used by the default implementation of UITableView.
 */
@interface CWTableViewCellBackgroundView : UIView 

@property (nonatomic, assign) UITableViewStyle tableViewStyle;
@property (nonatomic, assign) UITableViewCellSeparatorStyle separatorStyle;
@property (nonatomic, assign) UIEdgeInsets inset;
@property (nonatomic, assign) CWRectEdge freeEdges;
@property (nonatomic, assign) CGSize roundedCornerRadii;
@property (nonatomic, strong) UIColor* topGradientColor;
@property (nonatomic, strong) UIColor* bottomGradientColor;
@property (nonatomic, strong) UIColor* separatorColor;
@property (nonatomic, strong) UIColor* etchedSeparatorColor;

+(CWTableViewCellBackgroundView*)backgroundViewWithTableViewStyle:(UITableViewStyle)tableViewStyle separatorStyle:(UITableViewCellSeparatorStyle)separatorStyle;
+(CWTableViewCellBackgroundView*)highlightedBackgroundViewWithTableViewStyle:(UITableViewStyle)tableViewStyle separatorStyle:(UITableViewCellSeparatorStyle)separatorStyle;

-(id)initWithTableViewStyle:(UITableViewStyle)tableViewStyle separatorStyle:(UITableViewCellSeparatorStyle)separatorStyle;

@end