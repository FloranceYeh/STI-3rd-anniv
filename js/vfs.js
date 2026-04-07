const FILE_SYSTEM = {
    type: 'dir',
    children: {
        Documents: {
            type: 'dir',
            children: {
                'plan.md': { type: 'file',
                            content: '# STI 3rd Anniversary\n\n- Build demo\n- Test UI\n- Ship it'
                        },
                'nameOFanother.txt': { type: 'file',
                    content: '科技楼神秘小团体'
                }
            }
        },
        Downloads: {
            type: 'dir',
            children: {
                'release-notes.txt': {
                    type: 'file',
                    content: 'v1.0.0\n- Initial web desktop release'
                }
            }
        },
        Music: {
            type: 'dir',
            children: {}
        },
        Pictures: {
            type: 'dir',
            children: {
                'flf.jpg': {
                    type: 'file',
                    mediaType: 'image',
                    src: './images/flf.jpg'
                }
            }
        },
        'notes.txt': {
            type: 'file',
            content: 'STI\'s 3rd anniversary is coming!'
        },
        'README.md': {
            type: 'file',
            content: '#'
        }
    }
};